#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032 { struct Ed25519_PointExt; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032 { struct Ed25519_PointAccum; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032 { struct Ed25519_PointPrecomp; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032
{
	struct Ed25519 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int64_t M28L;
			int64_t M32L;
			int32_t PointBytes;
			int32_t ScalarUints;
			int32_t ScalarBytes;
			int32_t PrehashSize;
			int32_t PublicKeySize;
			int32_t SecretKeySize;
			int32_t SignatureSize;
			IL2CPP::Array<uint8_t>* Dom2Prefix;
			IL2CPP::Array<uint32_t>* P;
			IL2CPP::Array<uint32_t>* L;
			int32_t L0;
			int32_t L1;
			int32_t L2;
			int32_t L3;
			int32_t L4;
			IL2CPP::Array<int32_t>* B_x;
			IL2CPP::Array<int32_t>* B_y;
			IL2CPP::Array<int32_t>* C_d;
			IL2CPP::Array<int32_t>* C_d2;
			IL2CPP::Array<int32_t>* C_d4;
			int32_t WnafWidthBase;
			int32_t PrecompBlocks;
			int32_t PrecompTeeth;
			int32_t PrecompSpacing;
			int32_t PrecompPoints;
			int32_t PrecompMask;
			mscorlib::System::Object* precompLock;
			IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt*>* precompBaseTable;
			IL2CPP::Array<int32_t>* precompBase;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* CalculateS(IL2CPP::Array<uint8_t>* r, IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* s);
		static bool CheckContextVar(IL2CPP::Array<uint8_t>* ctx, uint8_t phflag);
		static bool CheckPointVar(IL2CPP::Array<uint8_t>* p);
		static bool CheckScalarVar(IL2CPP::Array<uint8_t>* s);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreateDigest();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreatePrehash();
		static uint32_t Decode24(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint32_t Decode32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Decode32(IL2CPP::Array<uint8_t>* bs, int32_t bsOff, IL2CPP::Array<uint32_t>* n, int32_t nOff, int32_t nLen);
		static bool DecodePointVar(IL2CPP::Array<uint8_t>* p, int32_t pOff, bool negate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* r);
		static void DecodeScalar(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint32_t>* n);
		static void Dom2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* d, uint8_t phflag, IL2CPP::Array<uint8_t>* ctx);
		static void Encode24(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode32(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode56(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void EncodePoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* p, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		static void GeneratePrivateKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, IL2CPP::Array<uint8_t>* k);
		static void GeneratePublicKey(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff);
		static IL2CPP::Array<int8_t>* GetWnaf(IL2CPP::Array<uint32_t>* n, int32_t width);
		static void ImplSign(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* d, IL2CPP::Array<uint8_t>* h, IL2CPP::Array<uint8_t>* s, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void ImplSign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void ImplSign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static bool ImplVerify(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, uint8_t phflag, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen);
		static void PointAddVar(bool negate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* r);
		static void PointAddVar(bool negate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* q, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* r);
		static void PointAddPrecomp(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointPrecomp* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* r);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* PointCopy(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* p);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* PointCopy(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p);
		static void PointDouble(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* r);
		static void PointExtendXY(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* p);
		static void PointExtendXY(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p);
		static void PointLookup(int32_t block, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointPrecomp* p);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt*>* PointPrecompVar(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p, int32_t count);
		static void PointSetNeutral(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* p);
		static void PointSetNeutral(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p);
		static void Precompute();
		static void PruneScalar(IL2CPP::Array<uint8_t>* n, int32_t nOff, IL2CPP::Array<uint8_t>* r);
		static IL2CPP::Array<uint8_t>* ReduceScalar(IL2CPP::Array<uint8_t>* n);
		static void ScalarMultBase(IL2CPP::Array<uint8_t>* k, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* r);
		static void ScalarMultBaseEncoded(IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		static void ScalarMultBaseYZ(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* z);
		static void ScalarMultStraussVar(IL2CPP::Array<uint32_t>* nb, IL2CPP::Array<uint32_t>* np, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointExt* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_PointAccum* r);
		static void Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void Sign(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ph, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void SignPrehash(IL2CPP::Array<uint8_t>* sk, int32_t skOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ph, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static bool Verify(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen);
		static bool Verify(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* m, int32_t mOff, int32_t mLen);
		static bool VerifyPrehash(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* ph, int32_t phOff);
		static bool VerifyPrehash(IL2CPP::Array<uint8_t>* sig, int32_t sigOff, IL2CPP::Array<uint8_t>* pk, int32_t pkOff, IL2CPP::Array<uint8_t>* ctx, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ph);
		void _ctor();
		static void _cctor();
	};
}

