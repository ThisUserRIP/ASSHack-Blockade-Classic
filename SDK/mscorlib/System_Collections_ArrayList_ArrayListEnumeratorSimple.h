#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_ArrayList.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections
{
	struct ArrayList_ArrayListEnumeratorSimple : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* list;
		int32_t index;
		int32_t version;
		mscorlib::System::Object* currentElement;
		bool isArrayList;
		struct StaticFields
		{
			mscorlib::System::Object* dummyObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Collections::ArrayList* list);
		mscorlib::System::Object* Clone();
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		void Reset();
		static void _cctor();
	};
}

