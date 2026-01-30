#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Extensions_Extensions.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct Extensions; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct Extensions___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::Extensions::Extensions___c* __9;
			mscorlib::System::Func_2<mscorlib::System::Char, mscorlib::System::Boolean>* __9__22_0;
			mscorlib::System::Func_2<mscorlib::System::Char, mscorlib::System::Boolean>* __9__26_0;
			mscorlib::System::Func_2<mscorlib::System::Char, mscorlib::System::Boolean>* __9__27_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _ReadPossibleQuotedText_b__22_0(wchar_t ch);
		bool _ParseOptionalHeader_b__26_0(wchar_t ch);
		bool _ParseQualityParams_b__27_0(wchar_t ch);
	};
}

