#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalRCore_Encoders_LitJsonEncoder.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Encoders { struct LitJsonEncoder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::LitJson { template <typename TJson, typename TValue> struct ImporterFunc_2; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalRCore::Encoders
{
	struct LitJsonEncoder___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SignalRCore::Encoders::LitJsonEncoder___c* __9;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::Int32, mscorlib::System::Int64>* __9__2_0;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::Int64, mscorlib::System::Int32>* __9__2_1;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::Double, mscorlib::System::Int32>* __9__2_2;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::String, mscorlib::System::DateTime>* __9__2_3;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::Double, mscorlib::System::Single>* __9__2_4;
			Assembly_CSharp::LitJson::ImporterFunc_2<mscorlib::System::String, IL2CPP::Array<mscorlib::System::Byte>>* __9__2_5;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int64_t __ctor_b__2_0(int32_t input);
		int32_t __ctor_b__2_1(int64_t input);
		int32_t __ctor_b__2_2(double input);
		mscorlib::System::DateTime __ctor_b__2_3(mscorlib::System::String* input);
		float __ctor_b__2_4(double input);
		IL2CPP::Array<uint8_t>* __ctor_b__2_5(mscorlib::System::String* input);
	};
}

