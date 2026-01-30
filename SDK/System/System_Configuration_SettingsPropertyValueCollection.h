#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Configuration { struct SettingsPropertyValue; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Configuration
{
	struct SettingsPropertyValueCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		int32_t get_Count();
		bool get_IsSynchronized();
		System::Configuration::SettingsPropertyValue* get_Item(mscorlib::System::String* name);
		mscorlib::System::Object* get_SyncRoot();
		void Add(System::Configuration::SettingsPropertyValue* property);
		void Clear();
		mscorlib::System::Object* Clone();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		void Remove(mscorlib::System::String* name);
		void SetReadOnly();
	};
}

