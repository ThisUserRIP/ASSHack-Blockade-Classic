#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security::Principal
{
	struct WindowsImpersonationContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _token;
		bool undo;
		void _ctor(intptr_t token);
		void Dispose();
		void Undo();
		static bool CloseToken(intptr_t token);
		static intptr_t DuplicateToken(intptr_t token);
		static bool SetCurrentToken(intptr_t token);
		static bool RevertToSelf();
	};
}

