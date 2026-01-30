#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Diagnostics_Tracing_EventFieldTags.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Diagnostics_Tracing_TraceLoggingDataType.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct FieldMetadata : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		int32_t nameSize;
		mscorlib::System::Diagnostics::Tracing::EventFieldTags tags;
		IL2CPP::Array<uint8_t>* custom;
		uint16_t fixedCount;
		uint8_t inType;
		uint8_t outType;
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType type, mscorlib::System::Diagnostics::Tracing::EventFieldTags tags, bool variableCount);
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType dataType, mscorlib::System::Diagnostics::Tracing::EventFieldTags tags, uint8_t countFlags, uint16_t fixedCount, IL2CPP::Array<uint8_t>* custom);
		void IncrementStructFieldCount();
		void Encode(int32_t& pos, IL2CPP::Array<uint8_t>* metadata);
	};
}

