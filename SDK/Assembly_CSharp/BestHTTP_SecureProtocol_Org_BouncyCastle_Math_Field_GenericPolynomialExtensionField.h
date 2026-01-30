#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { struct IFiniteField; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { struct IPolynomial; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	struct GenericPolynomialExtensionField : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* subfield;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* subfield, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* polynomial);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Characteristic();
		int32_t get_Dimension();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield();
		int32_t get_Degree();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

