#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::PlatformSupport::Collections::Specialized
{
	struct ReadOnlyList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* _list;
		void _ctor(mscorlib::System::Collections::IList* list);
		int32_t get_Count();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Object* get_SyncRoot();
		int32_t Add(mscorlib::System::Object* value);
		void Clear();
		bool Contains(mscorlib::System::Object* value);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* value);
		void Insert(int32_t index, mscorlib::System::Object* value);
		void Remove(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
	};
}

