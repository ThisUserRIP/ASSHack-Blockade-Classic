#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Keyboard.h"
namespace Rewired_Core::Rewired { struct Keyboard; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct Keyboard__PollForAllKeysDown_d__7 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerPollingInfo __2__current;
		int32_t __1__state;
		int32_t __l__initialThreadId;
		Rewired_Core::Rewired::Keyboard* __4__this;
		int32_t _count_5__8;
		int32_t _i_5__9;
		UnityEngine_CoreModule::UnityEngine::KeyCode _keyCode_5__a;
		bool _value_5__b;
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		bool MoveNext();
		Rewired_Core::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current();
		void System_Collections_IEnumerator_Reset();
		void System_IDisposable_Dispose();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		void _ctor(int32_t __1__state);
	};
}

