#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct PlatformInitializer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core
{
	struct KMqwOKsrIQzRyrdIXdUqflJpkln : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* ifYVtDQCtkERBHSAbYwFBqabzWk;
			mscorlib::System::String* hUHBLkqXKRzjGzKGsAkFLnseBAx;
			int64_t BcHSlIsPOYfrbbwgbFwlaqHQYvno;
			int32_t alfOIhidtfOByfawJEakMJHBgHk;
			int32_t sUydblBuATBWgPLAXcQUSDcsVVxt;
			int32_t dGfXYSbzcOzrbCCdeHRYpukSIfS;
			mscorlib::System::String* TIynIoOIJmXNqHvvjlLCMlgmxdx;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::Assembly>* MdZJYYBNOWprIGkcxDFQKaqdeEoh;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* pKLNoWCgVUqlRfCsOXaDmHUNbICB(mscorlib::System::String* A_0, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::TextAsset>* A_1, Rewired_Core::Rewired::Data::ConfigVars* A_2, bool A_3);
		static mscorlib::System::Object* pKLNoWCgVUqlRfCsOXaDmHUNbICB(mscorlib::System::String* A_0, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::Assembly>* A_1, Rewired_Core::Rewired::Data::ConfigVars* A_2);
		static mscorlib::System::Object* vlvMAQHWkAxgoWoSxPlggaCVguOB(mscorlib::System::String* A_0, mscorlib::System::String* A_1);
		static Rewired_Core::Rewired::PlatformInitializer* IUaJyasRTgPXHnQfzsyMNWUUxRZ(mscorlib::System::Type* A_0);
		static void _cctor();
	};
}

