#include "../includes/big_company.h"
#include "../includes/mid_company.h"
#include "../includes/programmer_cpp.h"
#include "../includes/programmer_go.h"
#include <memory>
int main(int argc, char *argv[]) {
  std::string cppCodes = "template<typename T>\\n"
                         "void bubbleSort(std::vector<T>& arr) {\\n"
                         "    int n = arr.size();\\n"
                         "    bool swapped;\\n"
                         "    \\n"
                         "    for (int i = 0; i < n - 1; ++i) {\\n"
                         "        swapped = false;\\n"
                         "        for (int j = 0; j < n - i - 1; ++j) {\\n"
                         "            if (arr[j] > arr[j + 1]) {\\n"
                         "                std::swap(arr[j], arr[j + 1]);\\n"
                         "                swapped = true;\\n"
                         "            }\\n"
                         "        }\\n"
                         "        \\n"
                         "        if (!swapped) break;\\n"
                         "    }\\n"
                         "}";
  std::string goCodes = "func bubbleSort(arr []int) {\\n"
                        "    n := len(arr)\\n"
                        "    for i := 0; i < n-1; i++ {\\n"
                        "        swapped := false\\n"
                        "        for j := 0; j < n-i-1; j++ {\\n"
                        "            if arr[j] > arr[j+1] {\\n"
                        "                // 交换元素\\n"
                        "                arr[j], arr[j+1] = arr[j+1], arr[j]\\n"
                        "                swapped = true\\n"
                        "            }\\n"
                        "        }\\n"
                        "        // 如果没有交换，说明数组已经有序\\n"
                        "        if !swapped {\\n"
                        "            break\\n"
                        "        }\\n"
                        "    }\\n"
                        "}";
  std::shared_ptr<BigCompany> bc(new BigCompany("Google", "USA"));
  std::shared_ptr<MidCompany> mc(new MidCompany("BaiDu", "China"));
  std::shared_ptr<ProgrammerCpp> pc(
      new ProgrammerCpp("Nexus", 20, 1000, cppCodes, "cpp", bc));

  std::shared_ptr<ProgrammerGo> pg(
      new ProgrammerGo("Nephrenn", 19, 1000, goCodes, "go", mc));

  pc->showInfo();
  puts("");
  pg->showInfo();

  return 0;
}
