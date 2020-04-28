#include "ManagerDatabase/patient.h"

namespace database {
    Patient::Patient(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
