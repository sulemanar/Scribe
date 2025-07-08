// This file is part of the "Scribe" project by Suleman

#pragma once

#include <string>

class LogObj {
 public:
  LogObj(const std::string& prefix) : message_(prefix) {}

  ~LogObj() {
    printf("%s\n", message_.c_str()); // or forward to the actual logger
  }

  void append(const std::string& part) const { // XXX must be const
    message_ += part;
  }

 private:
  mutable std::string message_;
};

inline const LogObj& operator<<(const LogObj& log, const char* message) {
  log.append(message);
  return log;
}

inline const LogObj& operator<<(const LogObj& log, const std::string& message) {
  log.append(message);
  return log;
}

inline const LogObj& operator<<(const LogObj& log, int value) {
  log.append(std::to_string(value));
  return log;
}

inline LogObj scribe(const std::string& prefix) {
  return LogObj(prefix + ": ");
}
