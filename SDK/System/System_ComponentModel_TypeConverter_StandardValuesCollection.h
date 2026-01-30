#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_TypeConverter.h"
namespace System::System::ComponentModel { struct TypeConverter; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct TypeConverter_StandardValuesCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ICollection* values;
		mscorlib::System::Array* valueArray;
		void _ctor(mscorlib::System::Collections::ICollection* values);
		int32_t get_Count();
		mscorlib::System::Object* get_Item(int32_t index);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

