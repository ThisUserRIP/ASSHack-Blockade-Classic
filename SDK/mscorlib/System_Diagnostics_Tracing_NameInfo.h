#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
#include "System_Diagnostics_Tracing_ConcurrentSetItem_2.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct NameInfo : mscorlib::System::Diagnostics::Tracing::ConcurrentSetItem_2<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Diagnostics::Tracing::EventTags>, mscorlib::System::Diagnostics::Tracing::NameInfo>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::Diagnostics::Tracing::EventTags tags;
		int32_t identity;
		IL2CPP::Array<uint8_t>* nameMetadata;
		struct StaticFields
		{
			int32_t lastIdentity;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void ReserveEventIDsBelow(int32_t eventId);
		void _ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags, int32_t typeMetadataSize);
		int32_t Compare(mscorlib::System::Diagnostics::Tracing::NameInfo* other);
		int32_t Compare(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Diagnostics::Tracing::EventTags> key);
		int32_t Compare(mscorlib::System::String* otherName, mscorlib::System::Diagnostics::Tracing::EventTags otherTags);
		static void _cctor();
	};
}

