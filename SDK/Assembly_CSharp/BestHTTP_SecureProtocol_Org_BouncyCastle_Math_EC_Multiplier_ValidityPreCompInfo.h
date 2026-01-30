#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	struct ValidityPreCompInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool failed;
		bool curveEquationPassed;
		bool orderPassed;
		struct StaticFields
		{
			mscorlib::System::String* PRECOMP_NAME;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool HasFailed();
		void ReportFailed();
		bool HasCurveEquationPassed();
		void ReportCurveEquationPassed();
		bool HasOrderPassed();
		void ReportOrderPassed();
		void _ctor();
		static void _cctor();
	};
}

