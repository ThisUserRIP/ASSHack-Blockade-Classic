#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Resources { struct ResourceManager; };
#include "System_Diagnostics_Tracing_EventManifestOptions.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventAttribute; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventTask.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ManifestBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* opcodeTab;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* taskTab;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt64, mscorlib::System::String>* keywordTab;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Type>* mapsTab;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* stringTab;
		mscorlib::System::Text::StringBuilder* sb;
		mscorlib::System::Text::StringBuilder* events;
		mscorlib::System::Text::StringBuilder* templates;
		mscorlib::System::Resources::ResourceManager* resources;
		mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* errors;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>>* perEventByteArrayArgIndices;
		mscorlib::System::String* eventName;
		int32_t numParams;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* byteArrArgIndices;
		void _ctor(mscorlib::System::String* providerName, mscorlib::System::Guid providerGuid, mscorlib::System::String* dllName, mscorlib::System::Resources::ResourceManager* resources, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags);
		void AddOpcode(mscorlib::System::String* name, int32_t value);
		void AddTask(mscorlib::System::String* name, int32_t value);
		void AddKeyword(mscorlib::System::String* name, uint64_t value);
		void StartEvent(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute);
		void AddEventParameter(mscorlib::System::Type* type, mscorlib::System::String* name);
		void EndEvent();
		IL2CPP::Array<uint8_t>* CreateManifest();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* get_Errors();
		void ManifestError(mscorlib::System::String* msg, bool runtimeCritical);
		mscorlib::System::String* CreateManifestString();
		void WriteNameAndMessageAttribs(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::String* elementName, mscorlib::System::String* name);
		void WriteMessageAttrib(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::String* elementName, mscorlib::System::String* name, mscorlib::System::String* value);
		mscorlib::System::String* GetLocalizedMessage(mscorlib::System::String* key, mscorlib::System::Globalization::CultureInfo* ci, bool etwFormat);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::Globalization::CultureInfo>* GetSupportedCultures(mscorlib::System::Resources::ResourceManager* resources);
		static mscorlib::System::String* GetLevelName(mscorlib::System::Diagnostics::Tracing::EventLevel level);
		mscorlib::System::String* GetTaskName(mscorlib::System::Diagnostics::Tracing::EventTask task, mscorlib::System::String* eventName);
		mscorlib::System::String* GetOpcodeName(mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::String* eventName);
		mscorlib::System::String* GetKeywords(uint64_t keywords, mscorlib::System::String* eventName);
		mscorlib::System::String* GetTypeName(mscorlib::System::Type* type);
		static void UpdateStringBuilder(mscorlib::System::Text::StringBuilder& stringBuilder, mscorlib::System::String* eventMessage, int32_t startIndex, int32_t count);
		mscorlib::System::String* TranslateToManifestConvention(mscorlib::System::String* eventMessage, mscorlib::System::String* evtName);
		int32_t TranslateIndexToManifestConvention(int32_t idx, mscorlib::System::String* evtName);
	};
}

