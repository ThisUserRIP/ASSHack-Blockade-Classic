#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_Data_SerializedObject.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace mscorlib::System { struct String; };
#include "Rewired_Utils_Classes_Data_SerializedObject_Entry.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_Entry; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct IndexedDictionary_2; };
#include "Rewired_Utils_Classes_Data_SerializedObject_Field.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_Field; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_Enumerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::IndexedDictionary_2<mscorlib::System::String, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Entry>* ioJEDxALMKOkykhQVhrilYLidGqU;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field GYYYxEcGsLxbIqZVOBzNLNXZlmE;
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Entry>>* pakVQEJqUCFHWDdTBwXZBiLEGvE;
		void _ctor(mscorlib::System::Object* dictionary);
		bool MoveNext();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field get_Current();
		void Dispose();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		void System_Collections_IEnumerator_Reset();
	};
}

