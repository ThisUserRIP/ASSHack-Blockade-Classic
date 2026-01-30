#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_TraceLoggingMetadataCollector.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingMetadataCollector; };
namespace mscorlib::System::Diagnostics::Tracing { struct FieldMetadata; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TraceLoggingMetadataCollector_Impl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::FieldMetadata>* fields;
		int16_t scratchSize;
		int8_t dataCount;
		int8_t pinCount;
		int32_t bufferNesting;
		bool scalar;
		void AddScalar(int32_t size);
		void AddNonscalar();
		void BeginBuffered();
		void EndBuffered();
		int32_t Encode(IL2CPP::Array<uint8_t>* metadata);
		void _ctor();
	};
}

