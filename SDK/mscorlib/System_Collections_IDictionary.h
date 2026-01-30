#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace mscorlib::System::Collections
{
	struct IDictionary
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		bool Contains(mscorlib::System::Object* key);
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		void Remove(mscorlib::System::Object* key);
	};
}

