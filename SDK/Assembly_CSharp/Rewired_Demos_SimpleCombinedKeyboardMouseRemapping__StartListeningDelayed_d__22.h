#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_SimpleCombinedKeyboardMouseRemapping.h"
namespace Assembly_CSharp::Rewired::Demos { struct SimpleCombinedKeyboardMouseRemapping; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct SimpleCombinedKeyboardMouseRemapping__StartListeningDelayed_d__22 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::Rewired::Demos::SimpleCombinedKeyboardMouseRemapping* __4__this;
		int32_t index;
		Rewired_Core::Rewired::ControllerMap* keyboardMap;
		int32_t actionElementMapToReplaceId;
		Rewired_Core::Rewired::ControllerMap* mouseMap;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

