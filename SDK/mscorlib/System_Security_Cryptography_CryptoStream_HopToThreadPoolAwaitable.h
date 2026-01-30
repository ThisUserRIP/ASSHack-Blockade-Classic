#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_CryptoStream.h"
namespace mscorlib::System::Security::Cryptography { struct CryptoStream; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoStream_HopToThreadPoolAwaitable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable GetAwaiter();
		bool get_IsCompleted();
		void OnCompleted(mscorlib::System::Action* continuation);
		void GetResult();
	};
}

