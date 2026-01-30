#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingMetadataCollector; };
#include "System_Diagnostics_Tracing_EventFieldFormat.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingDataCollector; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TraceLoggingTypeInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::Diagnostics::Tracing::EventKeywords keywords;
		mscorlib::System::Diagnostics::Tracing::EventLevel level;
		mscorlib::System::Diagnostics::Tracing::EventOpcode opcode;
		mscorlib::System::Diagnostics::Tracing::EventTags tags;
		mscorlib::System::Type* dataType;
		void _ctor(mscorlib::System::Type* dataType);
		void _ctor(mscorlib::System::Type* dataType, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords, mscorlib::System::Diagnostics::Tracing::EventTags tags);
		mscorlib::System::String* get_Name();
		mscorlib::System::Diagnostics::Tracing::EventLevel get_Level();
		mscorlib::System::Diagnostics::Tracing::EventOpcode get_Opcode();
		mscorlib::System::Diagnostics::Tracing::EventKeywords get_Keywords();
		mscorlib::System::Diagnostics::Tracing::EventTags get_Tags();
		mscorlib::System::Type* get_DataType();
		void WriteMetadata(mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format);
		void WriteObjectData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, mscorlib::System::Object* value);
		mscorlib::System::Object* GetData(mscorlib::System::Object* value);
	};
}

