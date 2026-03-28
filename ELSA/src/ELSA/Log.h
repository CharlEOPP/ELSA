#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace ELSA {
	
	
	class ELSA_API Log
	{

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};

}

//core log macros
#define EL_CORE_ERROR(...) ::ELSA::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EL_CORE_WARN(...)  ::ELSA::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EL_CORE_INFO(...)  ::ELSA::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EL_CORE_TRACE(...) ::ELSA::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EL_CORE_FATAL(...) ::ELSA::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define EL_ERROR(...) ::ELSA::Log::GetClientLogger()->error(__VA_ARGS__)
#define EL_WARN(...)  ::ELSA::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EL_INFO(...)  ::ELSA::Log::GetClientLogger()->info(__VA_ARGS__)
#define EL_TRACE(...) ::ELSA::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EL_FATAL(...) ::ELSA::Log::GetClientLogger()->fatal(__VA_ARGS__)