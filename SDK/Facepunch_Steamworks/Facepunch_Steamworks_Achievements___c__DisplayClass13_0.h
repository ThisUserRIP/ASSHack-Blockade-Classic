#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Achievements.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Achievements; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Achievement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Achievements___c__DisplayClass13_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* old;
		Facepunch_Steamworks::Facepunch::Steamworks::Achievements* __4__this;
		void _ctor();
		Facepunch_Steamworks::Facepunch::Steamworks::Achievement* _Refresh_b__0(int32_t x);
	};
}

