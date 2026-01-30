#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Diagnostics_Tracing_TraceLoggingTypeInfo_1.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingMetadataCollector; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventFieldFormat.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingDataCollector; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct UInt64TypeInfo : mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<mscorlib::System::UInt64>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void WriteMetadata(mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format);
		void WriteData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, uint64_t& value);
		void _ctor();
	};
}

