#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventKeywords : int64_t
	{
		None = static_cast<int64_t>(0x0),
		All = static_cast<int64_t>(0xFFFFFFFFFFFFFFFF),
		MicrosoftTelemetry = static_cast<int64_t>(0x2000000000000),
		WdiContext = static_cast<int64_t>(0x2000000000000),
		WdiDiagnostic = static_cast<int64_t>(0x4000000000000),
		Sqm = static_cast<int64_t>(0x8000000000000),
		AuditFailure = static_cast<int64_t>(0x10000000000000),
		AuditSuccess = static_cast<int64_t>(0x20000000000000),
		CorrelationHint = static_cast<int64_t>(0x10000000000000),
		EventLogClassic = static_cast<int64_t>(0x80000000000000),
	};
}

