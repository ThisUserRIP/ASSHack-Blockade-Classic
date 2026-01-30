#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace Rewired_Core::Rewired::Utils::Interfaces
{
	struct IExportToJson
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void WriteJson(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* appendValueDelegate);
	};
}

