#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "process.h"
#include "processor.h"
#include "system.h"

using std::set;
using std::size_t;
using std::string;
using std::vector;

// Initial commit from Linux virtual machine
// Initial commit from virtual machine
// Initial commit
// TODO: Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() {
    std::vector<int> allProcessesPids = LinuxParser::Pids();
    OrderAllPidsAndSetProcessesToDisplay(allProcessesPids);

    for (int i=0; i< pidsOfProcessesToDisplay.size(); ++i){
        Process *currentProcess;
        currentProcess->setPidOfProcess(pidsOfProcessesToDisplay[i]);
        this->processes_.push_back(currentProcess);
    }
    return processes_; }

void System::OrderAllPidsAndSetProcessesToDisplay(std::vector<int> vec){

    // ordering all the processes
    this->pidsOfProcessesToDisplay.push_back(vec[0]);
}      


// TODO: Return the system's kernel identifier (string)
std::string System::Kernel() { 
    return LinuxParser::Kernel(); }

// TODO: Return the system's memory utilization
float System::MemoryUtilization() { 
    return LinuxParser::MemoryUtilization(); }

// TODO: Return the operating system name
std::string System::OperatingSystem() { 
    return LinuxParser::OperatingSystem(); }

// TODO: Return the number of processes actively running on the system
int System::RunningProcesses() {
    return LinuxParser::RunningProcesses();
}

// TODO: Return the total number of processes on the system
int System::TotalProcesses() {
    return LinuxParser::TotalProcesses(); }

// TODO: Return the number of seconds since the system started running
long int System::UpTime() {
    return LinuxParser::UpTime();
}