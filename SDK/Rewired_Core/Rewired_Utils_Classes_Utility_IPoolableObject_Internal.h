#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct IObjectPool; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct IPoolableObject_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Utility::IObjectPool* get_pool();
		void set_pool(Rewired_Core::Rewired::Utils::Classes::Utility::IObjectPool* value);
		void Clear();
	};
}

