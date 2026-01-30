#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_WeakReference.h"
#include "System_ComponentModel_WeakHashtable.h"
namespace System::System::ComponentModel { struct WeakHashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::ComponentModel
{
	struct WeakHashtable_EqualityWeakReference : mscorlib::System::WeakReference
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _hashCode;
		void _ctor(mscorlib::System::Object* o);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
	};
}

