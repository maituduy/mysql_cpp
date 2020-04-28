#ifndef TEST_MYSQL_DATABASE_H
#define TEST_MYSQL_DATABASE_H

#include <sqlpp11/sqlpp11.h>
#include <sqlpp11/mysql/mysql.h>

namespace mysql = sqlpp::mysql;

namespace database{

    inline std::shared_ptr<mysql::connection_config> make_config(const std::string& host, const int& port, const std::string& user, const std::string& password, const std::string& database, bool debug=true) {
        auto config = std::make_shared<mysql::connection_config>();
        config->host = host;
        config->port = port;
        config->user = user;
        config->password = password;
        config->database = database;
        config->debug = debug;
        return config;
    }

    template<class T, typename Table>
    class Database {
    public:
        Table table;

        Database(const std::shared_ptr<mysql::connection_config>& config): db(config) {

        }

        template <typename... Assignments>
        int insert(std::tuple<Assignments...> assignments) {
            return db(insert_into(table).set(assignments));
        }

        template <typename... Assignments, typename Expression>
        int update_with(std::tuple<Assignments...> assignments, Expression expression) {
            return db(update(table).set(assignments).where(expression));
        }

        template <typename Expression>
        int remove(Expression expression) {
            return db(remove_from(table).where(expression));
        }

    private:
        mysql::connection db;
    };
}


#endif //TEST_MYSQL_DATABASE_H
