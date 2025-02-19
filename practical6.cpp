
#include <iostream>
#include <vector>
#include <algorithm>


struct PersonalRecord {
    std::string name;
    std::string dob;
    std::string telephoneNumber;
};


void displayRecord(const PersonalRecord& record) {
    std::cout << "Name: " << record.name << "\tDOB: " << record.dob << "\tTelephone: " << record.telephoneNumber << "\n";
}

bool compareRecords(const PersonalRecord& record1, const PersonalRecord& record2) {
    return record1.name < record2.name;
}

int main() {
    std::vector<PersonalRecord> records;

 
    int numRecords;
    std::cout << "Enter the number of records: ";
    std::cin >> numRecords;

    for (int i = 0; i < numRecords; ++i) {
        PersonalRecord record;
        std::cout << "Enter details for record " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> record.name;
        std::cout << "DOB: ";
        std::cin >> record.dob;
        std::cout << "Telephone: ";
        std::cin >> record.telephoneNumber;

        records.push_back(record);
    }

   
    std::sort(records.begin(), records.end(), compareRecords);

    std::cout << "\nSorted Records:\n";
    for (const auto& record : records) {
        displayRecord(record);
    }

    
    std::string searchName;
    std::cout << "\nEnter the name to search: ";
    std::cin >> searchName;

    auto it = std::find_if(records.begin(), records.end(),  [searchName](const PersonalRecord& record) { return record.name == searchName; });

    if (it != records.end()) {
        std::cout << "Record found:\n";
        displayRecord(*it);
    } else {
        std::cout << "Record not found.\n";
    }

    return 0;
}

// Enter the number of records: 2
// Enter details for record 1:
// Name: sarthak
// DOB: 10/8/4
// Telephone: 752145
// Enter details for record 2:
// Name: Pande
// DOB: 12/8/7
// Telephone: 78523256

// Sorted Records:
// Name: Sarthak    DOB: 10/8/4     Telephone: 752145
// Name: Pande     DOB: 12/8/7     Telephone: 78523256

// Enter the name to search: PADMAN
// Record found:
// Name: Pande     DOB: 12/8/7     Telephone: 78523256