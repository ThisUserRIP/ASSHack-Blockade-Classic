#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Friends.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct SteamFriend; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Friends__get_AllFriends_d__23 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* __2__current;
		int32_t __l__initialThreadId;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends* __4__this;
		mscorlib::System::Collections::Generic::IEnumerator_1<Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend>* __7__wrap1;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* System_Collections_Generic_IEnumerator_Facepunch_Steamworks_SteamFriend__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend>* System_Collections_Generic_IEnumerable_Facepunch_Steamworks_SteamFriend__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

