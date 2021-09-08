#pragma once

#include "pch.h"

class timer
{
public:
  explicit timer(const char* function_name)
    :m_name(function_name)
  {
    m_start = clock::now();
  }

  ~timer()
  {
    m_end = clock::now();

    const std::chrono::duration<double, std::milli> elapsed = m_end - m_start;

    std::cout << m_name << ": " << std::fixed << elapsed.count() << " seconds\n";
  }
private:
  using clock = std::chrono::high_resolution_clock;
  using time_point = std::chrono::time_point<clock>;
  time_point m_start;
  time_point m_end;
  const char* m_name;
};