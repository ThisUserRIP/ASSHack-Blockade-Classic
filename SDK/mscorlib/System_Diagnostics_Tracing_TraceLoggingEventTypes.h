#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingTypeInfo; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System::Diagnostics::Tracing { struct NameInfo; };
#include "System_Diagnostics_Tracing_ConcurrentSet_2.h"
namespace mscorlib::System::Diagnostics::Tracing { template <typename KeyType, typename ItemType> struct ConcurrentSet_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TraceLoggingEventTypes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos;
		mscorlib::System::String* name;
		mscorlib::System::Diagnostics::Tracing::EventTags tags;
		uint8_t level;
		uint8_t opcode;
		mscorlib::System::Diagnostics::Tracing::EventKeywords keywords;
		IL2CPP::Array<uint8_t>* typeMetadata;
		int32_t scratchSize;
		int32_t dataCount;
		int32_t pinCount;
		mscorlib::System::Diagnostics::Tracing::ConcurrentSet_2<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Diagnostics::Tracing::EventTags>, mscorlib::System::Diagnostics::Tracing::NameInfo> nameInfos;
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags, IL2CPP::Array<mscorlib::System::Type*>* types);
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* paramInfos);
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventTags tags, mscorlib::System::String* defaultName, IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos);
		mscorlib::System::String* get_Name();
		mscorlib::System::Diagnostics::Tracing::EventTags get_Tags();
		mscorlib::System::Diagnostics::Tracing::NameInfo* GetNameInfo(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags);
		IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* paramInfos);
		static IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(IL2CPP::Array<mscorlib::System::Type*>* types);
	};
}

