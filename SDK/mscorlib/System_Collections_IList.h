#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Collections
{
	struct IList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		int32_t Add(mscorlib::System::Object* value);
		bool Contains(mscorlib::System::Object* value);
		void Clear();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		int32_t IndexOf(mscorlib::System::Object* value);
		void Insert(int32_t index, mscorlib::System::Object* value);
		void Remove(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
	};
}

