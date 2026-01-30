#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct NewSessionTicket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t mTicketLifetimeHint;
		IL2CPP::Array<uint8_t>* mTicket;
		void _ctor(int64_t ticketLifetimeHint, IL2CPP::Array<uint8_t>* ticket);
		int64_t get_TicketLifetimeHint();
		IL2CPP::Array<uint8_t>* get_Ticket();
		void Encode(mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* Parse(mscorlib::System::IO::Stream* input);
	};
}

