#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_WeakHashtable.h"
namespace System::System::ComponentModel { struct WeakHashtable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct WeakHashtable_WeakKeyComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool System_Collections_IEqualityComparer_Equals(mscorlib::System::Object* x, mscorlib::System::Object* y);
		int32_t System_Collections_IEqualityComparer_GetHashCode(mscorlib::System::Object* obj);
		void _ctor();
	};
}

