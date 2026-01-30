#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Policy_Evidence.h"
namespace mscorlib::System::Security::Policy { struct Evidence; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Security::Policy
{
	struct Evidence_EvidenceEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IEnumerator* currentEnum;
		mscorlib::System::Collections::IEnumerator* hostEnum;
		mscorlib::System::Collections::IEnumerator* assemblyEnum;
		void _ctor(mscorlib::System::Collections::IEnumerator* hostenum, mscorlib::System::Collections::IEnumerator* assemblyenum);
		bool MoveNext();
		void Reset();
		mscorlib::System::Object* get_Current();
	};
}

