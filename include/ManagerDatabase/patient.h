#ifndef TEST_MYSQL_PATIENT_H
#define TEST_MYSQL_PATIENT_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Patient.h"

namespace database {
    class Patient : public Database<Patient, table::Patient> {
    public:
        Patient(const std::shared_ptr<mysql::connection_config>& config);
    };
}

#endif //TEST_MYSQL_PATIENT_H
