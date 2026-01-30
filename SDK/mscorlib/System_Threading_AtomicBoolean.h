#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct AtomicBoolean : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t flag;
		bool TryRelaxedSet();
		bool Exchange(bool newVal);
		bool Equals(mscorlib::System::Threading::AtomicBoolean* rhs);
		bool Equals(mscorlib::System::Object* rhs);
		int32_t GetHashCode();
		void _ctor();
	};
}

