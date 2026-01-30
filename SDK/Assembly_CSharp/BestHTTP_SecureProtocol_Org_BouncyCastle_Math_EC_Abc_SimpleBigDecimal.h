#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc
{
	struct SimpleBigDecimal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* bigInt;
		int32_t scale;
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* GetInstance(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val, int32_t scale);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* bigInt, int32_t scale);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* limBigDec);
		void CheckScale(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(int32_t newScale);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ShiftLeft(int32_t n);
		int32_t CompareTo(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* val);
		int32_t CompareTo(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* val);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Floor();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Round();
		int32_t get_IntValue();
		int64_t get_LongValue();
		int32_t get_Scale();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

