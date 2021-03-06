#include <emscripten/trace.h>

int main(int argc, const char* argv[]) {

  emscripten_trace_configure_for_test();

  emscripten_trace_enter_context("Application Startup");
  emscripten_trace_log_message("Application", "starting up");
  emscripten_trace_exit_context();

  emscripten_trace_record_frame_start();
  emscripten_trace_record_frame_end();

  return 0;
}
