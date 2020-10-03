// ITN_calculator_volume.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
//#include <ios>
//#include <glm/vec3.hpp>

struct v_struct {
    float x;
    float y;
    float z;
};

struct f_struct {
    v_struct v1;
    v_struct v2;
    v_struct v3;
};

std::vector < v_struct > v_vector;
std::vector < f_struct > f_vector;

class parser_and_loader {
    
    std::ifstream ifs;
    char line_buffer[128] = "";
    //char* LB_pointer = line_buffer;
    char char_buffer = NULL;
    long i = 1;

    void vertex_parser () {

    }

    void face_parser() {

    }


    public:
        //우선 파일 잘 열리나 확인
        void file_loading (char file_dir[]) {
            FILE* file = fopen(file_dir, "r");
            long res = fscanf(file, "%s", line_buffer);
            std::cout << "reading " << file << "\n";
            if (!ifs.is_open()) {
                std::cout << "file opening error. Exit the Program\n";
                std::cin >> i;
        }
        std::cout << "File Opened!\n"; 
        //사용할 것들 미리 만들어두기
        v_struct v_temp;
        f_struct f_temp;


        //이제 ifs.getline이 true를 반환하는 동안 계속해서 ifs.getline할거야.
        //아니야,,, 그냥 편하게 갈래. File* file과 fscnaf 쓸거야.
        
        while (1) {
            
            
            //라인 얻어서 파싱 시작함. 아래 cout은 라인수 알려주려구 해놨어.
            //성능저하 되니 실제 사용할 땐 지워줘.
            //std::cout << "line : " << i << "\n";
            std::cout << line_buffer << "\n";
            i++;
            
            //이제 파싱 시작해
            std::cout << line_buffer[0,0] << "\n";
            char_buffer = line_buffer[0,0];
            

            if (strcmp(&char_buffer, "v") == 0) {
                std::cout << "vertex founded!\n";
                
                fscanf(ifs, "%f %f %f\n", &v_temp.x, &v_temp.y, &v_temp.z);
                
            }
            
            

            else if (strcmp(&char_buffer, "f") == 0) {
                std::cout << "face founded!\n";
            }
            
            

         }
            
        ifs.close();
    }

    

};

class f_parser {

};

class parse_and_loading {

};

int main()
{
    std::cout << "Hello World!\n";
    parser_and_loader pnl;
    char file_dir[] = "test/test_cube.obj";
    pnl.file_loading(file_dir);
    //pnl.volume_calculation();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
