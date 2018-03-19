#include <httplib.h>
#include <iostream>

int i;

int main()
{
    using namespace httplib;
    using namespace std;

    Server svr;

    i = 3;

    svr.get("/hi", [](const Request& req, Response& res) {
        res.set_content(std::to_string(i), "text/plain");
    });

    svr.post("/a", [](const Request& req, Response& res) {
        i = 7;
        res.set_content(std::to_string(i), "text/plain");
    });

    svr.get(R"(/numbers/(\d+))", [&](const Request& req, Response& res) {
        auto numbers = req.matches[1];
        res.set_content(numbers, "text/plain");
    });

    svr.post("/multipart", [&](const Request& req, Response& res) {
        auto size = req.files.size();
        auto ret = req.has_file("name1");

        res.set_content(std::to_string(141423), "text/plain");

        // const auto& file = req.get_file_value("name1");
        // file.filename;
        // file.content_type;
        // auto body = req.body.substr(file.offset, file.length);
    });

    svr.listen("localhost", 4000);
}