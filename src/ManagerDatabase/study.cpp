#include "ManagerDatabase/study.h"

namespace database {
    Study::Study(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
