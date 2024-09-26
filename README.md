
# COVID-19 Patient Management System

This project is a console-based application designed to manage records of Covid-19 patients. It allows users to add, delete, and view patient records, including details like NIC, name, age, gender, symptoms, and admission date.

## Features

- **Add Patient Records**: Allows users to input and store information about Covid patients.
- **Delete Patient Records**: Enables users to remove a patient's record using their NIC number.
- **Show a Specific Patient Record**: Displays details of a patient based on their NIC.
- **Show All Patient Records**: Lists all stored patient records in the system.

## Technologies Used

- C Programming Language
- Standard Input/Output Library (`stdio.h`)
- String Handling Library (`string.h`)

## Getting Started

### Prerequisites

- A C compiler (like GCC) installed on your system.

### How to Run the Program

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

2. Compile the program:
   ```bash
   gcc -o patient_management patient_management.c
   ```

3. Run the executable:
   ```bash
   ./patient_management
   ```

### Usage

- The program starts by displaying a menu with options:
  1. Add Patients records
  2. Delete a Patient record
  3. Show a Patient record
  4. Show all Patients' records
  0. Quit

- Follow the on-screen prompts to manage patient records.

## Code Structure

The main functionalities of the program are encapsulated in separate functions:

- `addNew()`: Adds new patient records to the system.
- `delRec()`: Deletes a patient record based on the NIC number.
- `show_a_Rec()`: Displays a specific patient's record using their NIC number.
- `show_recs()`: Shows all patient records stored in the system.

## Example

Here's how to add a new patient record:

```
Enter NIC number    : 123456789V
Enter First Name    : John
Enter Last Name     : Doe
Enter Age           : 30
Enter the Gender    : Male
Enter the Symptoms  : Fever
Enter the Date      : 2023-10-01
```

## Contribution

Contributions are welcome! Please feel free to submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
