#include <iostream>
#include "ManagerDatabase/ae.h"

int main() {
    std::string user = "root";
    std::string password = "root";
    std::string host = "localhost";
    int port = 3306;
    std::string database = "mysql_cpp";

    database::Ae ae(database::make_config(host, port, user, password, database));

    // insert
    int id = ae.insert(
            std::make_tuple(
                    ae.table.port = 80,
                    ae.table.aet = "test",
                    ae.table.hostname = "localhost")
    );

    std::cout << "Inserted pk: " << id << std::endl;

    // update
    int n_rows = ae.update_with(
            std::make_tuple(
                    ae.table.hostname = "localhost2"
            ),
            ae.table.aet == "test" /* condition */
    );

    std::cout << "Updated " << n_rows << " rows" << std::endl;

    // delete

    n_rows = ae.remove(ae.table.port == 80);

    std::cout << "Deleted " << n_rows << " rows" << std::endl;

    return 0;
}