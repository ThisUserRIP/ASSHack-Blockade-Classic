#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct ThreadSafeUnityInput_Mouse; };
namespace Rewired_Core::Rewired { struct ThreadSafeUnityInput_Keyboard; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ThreadSafeUnityInput : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ThreadSafeUnityInput_Mouse* dBtYkBnMasFBQvAIQlZpEopBcfR;
			Rewired_Core::Rewired::ThreadSafeUnityInput_Keyboard* QOtxIeDuprwzoLEbpNyjwKvjrMS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ThreadSafeUnityInput_Mouse* get_mouse();
		static Rewired_Core::Rewired::ThreadSafeUnityInput_Keyboard* get_keyboard();
		static void Initialize();
		static void PostInitialize();
		static void PostInitialize2();
		static void Deinitialize();
		static void Update();
	};
}

