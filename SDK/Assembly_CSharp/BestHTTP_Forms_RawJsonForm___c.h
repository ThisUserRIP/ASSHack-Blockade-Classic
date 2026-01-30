#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Forms_RawJsonForm.h"
namespace Assembly_CSharp::BestHTTP::Forms { struct RawJsonForm; };
namespace Assembly_CSharp::BestHTTP::Forms { struct HTTPFieldData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Forms
{
	struct RawJsonForm___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::Forms::RawJsonForm___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::BestHTTP::Forms::HTTPFieldData, mscorlib::System::String>* __9__2_0;
			mscorlib::System::Func_2<Assembly_CSharp::BestHTTP::Forms::HTTPFieldData, mscorlib::System::String>* __9__2_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _GetData_b__2_0(Assembly_CSharp::BestHTTP::Forms::HTTPFieldData* x);
		mscorlib::System::String* _GetData_b__2_1(Assembly_CSharp::BestHTTP::Forms::HTTPFieldData* x);
	};
}

