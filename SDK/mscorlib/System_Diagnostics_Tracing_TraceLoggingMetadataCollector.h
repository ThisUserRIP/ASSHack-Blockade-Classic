#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingMetadataCollector_Impl; };
namespace mscorlib::System::Diagnostics::Tracing { struct FieldMetadata; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Diagnostics_Tracing_EventFieldTags.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_TraceLoggingDataType.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TraceLoggingMetadataCollector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector_Impl* impl;
		mscorlib::System::Diagnostics::Tracing::FieldMetadata* currentGroup;
		int32_t bufferedArrayFieldCount;
		mscorlib::System::Diagnostics::Tracing::EventFieldTags _Tags_k__BackingField;
		void _ctor();
		void _ctor(mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* other, mscorlib::System::Diagnostics::Tracing::FieldMetadata* group);
		mscorlib::System::Diagnostics::Tracing::EventFieldTags get_Tags();
		void set_Tags(mscorlib::System::Diagnostics::Tracing::EventFieldTags value);
		int32_t get_ScratchSize();
		int32_t get_DataCount();
		int32_t get_PinCount();
		bool get_BeginningBufferedArray();
		mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* AddGroup(mscorlib::System::String* name);
		void AddScalar(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType type);
		void AddBinary(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType type);
		void AddArray(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType type);
		void BeginBufferedArray();
		void EndBufferedArray();
		IL2CPP::Array<uint8_t>* GetMetadata();
		void AddField(mscorlib::System::Diagnostics::Tracing::FieldMetadata* fieldMetadata);
	};
}

