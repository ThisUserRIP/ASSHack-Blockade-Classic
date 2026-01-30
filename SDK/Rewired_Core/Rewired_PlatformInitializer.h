#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Data { struct IConfigVars_Internal; };
namespace Rewired_Core::Rewired::Interfaces { struct IElementIdentifierTool; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct PlatformInitializer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* Initialize(Rewired_Core::Rewired::Data::IConfigVars_Internal* configVars);
		Rewired_Core::Rewired::Interfaces::IElementIdentifierTool* CreateTool(mscorlib::System::String* inputSourceString);
		void _ctor();
	};
}

