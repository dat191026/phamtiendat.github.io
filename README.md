<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Chúc Mừng Ngày 20/10</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Dancing+Script:wght@400;700&family=Quicksand:wght@300;400;500&display=swap" rel="stylesheet">
    <style>
        body {
            font-family: 'Quicksand', sans-serif;
            overflow: hidden;
            cursor: url("data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' width='40' height='48' viewport='0 0 100 100' style='fill:black;font-size:24px;'><text y='50%'>💖</text></svg>") 16 0, auto;
        }
        .font-dancing {
            font-family: 'Dancing Script', cursive;
        }
        #main-container {
            background: linear-gradient(135deg, #ffdde1, #ee9ca7, #ffdde1, #fbc2eb, #a6c1ee);
            background-size: 400% 400%;
            width: 100vw;
            height: 100vh;
            overflow: hidden;
            position: relative;
            animation: gradient-animation 15s ease infinite;
            opacity: 0;
            transition: opacity 1s ease-in;
        }
        #main-container.loaded {
            opacity: 1;
        }

        @keyframes gradient-animation {
            0% { background-position: 0% 50%; }
            50% { background-position: 100% 50%; }
            100% { background-position: 0% 50%; }
        }

        #falling-petals {
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            pointer-events: none;
            z-index: 1;
        }
        .petal {
            position: absolute;
            background-image: url('data:image/svg+xml;utf8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 50 50"><path d="M25 5 C 45 10, 45 40, 25 45 C 5 40, 5 10, 25 5" fill="%23FFB6C1" opacity="0.7"/></svg>');
            background-size: contain;
            width: 20px;
            height: 20px;
            animation: fall linear infinite;
        }
        @keyframes fall {
            0% {
                transform: translateY(-10vh) rotate(0deg);
                opacity: 1;
            }
            100% {
                transform: translateY(105vh) rotate(720deg) translateX(5vw);
                opacity: 0.5;
            }
        }
        .content-center {
            position: relative;
            z-index: 2;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            height: 100%;
            text-align: center;
        }
        .title { animation: fadeInDown 2s ease-out; }
        .subtitle { animation: fadeInUp 2s ease-out; }
        #gift-box {
            animation: popIn 2s 1s ease-out forwards, pulse 2.5s infinite 3s;
            opacity: 0;
            cursor: pointer;
            transition: transform 0.3s ease;
        }
        #gift-box:hover {
            transform: scale(1.1) rotate(5deg);
            animation-play-state: paused;
        }

        @keyframes pulse {
            0% { box-shadow: 0 0 0 0 rgba(255, 255, 255, 0.7); }
            70% { box-shadow: 0 0 0 20px rgba(255, 255, 255, 0); }
            100% { box-shadow: 0 0 0 0 rgba(255, 255, 255, 0); }
        }
        
        #gift-icon-container {
            border-radius: 50%;
        }

        @keyframes popIn {
            0% { opacity: 0; transform: scale(0.5); }
            100% { opacity: 1; transform: scale(1); }
        }
        @keyframes fadeInDown {
            from { opacity: 0; transform: translateY(-50px); }
            to { opacity: 1; transform: translateY(0); }
        }
        @keyframes fadeInUp {
            from { opacity: 0; transform: translateY(50px); }
            to { opacity: 1; transform: translateY(0); }
        }

        #card {
            transition: all 0.5s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            transform: scale(0) rotate(-15deg);
            opacity: 0;
            width: 90%;
            max-width: 500px;
            z-index: 10;
        }
        #card.show {
            transform: scale(1) rotate(0deg);
            opacity: 1;
        }
        #overlay {
            position: fixed; top: 0; left: 0; width: 100%; height: 100%;
            background: rgba(0,0,0,0.5);
            z-index: 5;
            opacity: 0;
            pointer-events: none;
            transition: opacity 0.5s ease;
        }
        #overlay.show { opacity: 1; pointer-events: auto; }

        /* Loader */
        #loader {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: linear-gradient(135deg, #ffdde1, #ee9ca7);
            z-index: 9999;
            display: flex;
            justify-content: center;
            align-items: center;
            flex-direction: column;
            transition: opacity 1s ease, visibility 1s ease;
        }
        #loader.hidden {
            opacity: 0;
            visibility: hidden;
        }
        #enter-button {
            border: 2px solid white;
            padding: 12px 28px;
            border-radius: 50px;
            color: white;
            font-size: 1.2rem;
            background-color: transparent;
            cursor: pointer;
            transition: all 0.3s ease;
            box-shadow: 0 4px 15px rgba(0,0,0,0.1);
        }
        #enter-button:hover {
            background-color: white;
            color: #ee9ca7;
            transform: scale(1.05);
        }
    </style>
</head>
<body>

    <!-- Màn hình chờ -->
    <div id="loader">
        <h2 class="font-dancing text-5xl text-white mb-8 text-center px-4">Một điều diệu kỳ đang chờ Hnhu...</h2>
        <button id="enter-button">Nhấn vào đây</button>
    </div>

    <div id="main-container">
        <div id="falling-petals"></div>
        
        <div class="content-center p-4">
            <h1 class="title font-dancing text-5xl md:text-7xl text-white" style="text-shadow: 2px 2px 4px rgba(0,0,0,0.3);">Chúc Mừng 20/10</h1>
            <p class="subtitle text-lg md:text-2xl text-white/90 mt-4 max-w-2xl"></p>
            
            <div id="gift-box" class="mt-12">
                <p class="text-white/80 mb-2 italic">Một món quà nhỏ dành cho Hnhu!</p>
                <div id="gift-icon-container" class="p-4">
                    <svg xmlns="http://www.w3.org/2000/svg" class="h-24 w-24 md:h-32 md:w-32 text-white drop-shadow-lg" viewBox="0 0 20 20" fill="currentColor">
                       <path fill-rule="evenodd" d="M5 5a3 3 0 013-3h4a3 3 0 013 3v1h-2V5a1 1 0 00-1-1H8a1 1 0 00-1 1v1H5V5z" clip-rule="evenodd" />
                       <path d="M3 8a2 2 0 012-2h10a2 2 0 012 2v8a2 2 0 01-2 2H5a2 2 0 01-2-2V8zm5 4a1 1 0 10-2 0v2a1 1 0 102 0v-2zm4-2a1 1 0 011 1v2a1 1 0 11-2 0v-2a1 1 0 011-1z" />
                    </svg>
                </div>
            </div>
        </div>

        <!-- Lớp phủ và thiệp chúc mừng -->
        <div id="overlay" class="flex items-center justify-center p-4">
            <div id="card" class="bg-white rounded-2xl shadow-2xl p-6 md:p-8 flex flex-col items-center text-center">
                <p class="text-gray-600 mb-2">Nhân ngày Phụ nữ Việt Nam 20/10.</p>
                <p class="text-gray-600">Chúc Hnhu luôn xinh đẹp, vui tươi, mạnh khỏe và thành công trong cuộc sống và mọi điều tốt đẹp nhất sẽ đến với bạn, không chỉ trong ngày 20/10 mà trong tất cả ngày còn lại. Hãy luôn là bông hoa rực rỡ và ngát hương nhé cô gái!</p>
                <h2 class="font-dancing text-4xl text-pink-500 my-4">Thân Tặng Hnhu!</h2>
                <img src="hoa.jpg" alt="Ảnh gif hoa nở" class="rounded-lg my-6 w-48 h-48 object-cover">
                <button id="close-card" class="mt-4 bg-pink-500 hover:bg-pink-600 text-white font-bold py-2 px-6 rounded-full transition-colors duration-300">Đóng</button>
            </div>
        </div>
    </div>

    <audio id="background-music" loop>
        <source src="https://cdns-preview-d.dzcdn.net/stream/c-dace467d3e1d5203714b7e80552b2170-9.mp3" type="audio/mpeg">
    </audio>

    <script>
        document.addEventListener('DOMContentLoaded', () => {
            const loader = document.getElementById('loader');
            const enterButton = document.getElementById('enter-button');
            const mainContainer = document.getElementById('main-container');
            const petalsContainer = document.getElementById('falling-petals');
            const giftBox = document.getElementById('gift-box');
            const card = document.getElementById('card');
            const closeCardBtn = document.getElementById('close-card');
            const overlay = document.getElementById('overlay');
            const music = document.getElementById('background-music');

            enterButton.addEventListener('click', () => {
                loader.classList.add('hidden');
                mainContainer.classList.add('loaded');
                
                music.play().catch(error => console.log("Lỗi phát nhạc: ", error));

                // Tạo hoa rơi sau khi vào trang chính
                const numberOfPetals = 50;
                for (let i = 0; i < numberOfPetals; i++) {
                    const petal = document.createElement('div');
                    petal.className = 'petal';
                    const size = Math.random() * 15 + 10;
                    petal.style.width = `${size}px`;
                    petal.style.height = `${size}px`;
                    petal.style.left = `${Math.random() * 100}vw`;
                    const animDuration = Math.random() * 8 + 7; // 7 đến 15 giây
                    petal.style.animationDuration = `${animDuration}s`;
                    const animDelay = Math.random() * 10;
                    petal.style.animationDelay = `-${animDelay}s`;
                    petalsContainer.appendChild(petal);
                }
            }, { once: true });
            
            giftBox.addEventListener('click', () => {
                card.classList.add('show');
                overlay.classList.add('show');
            });
            
            // Ngăn việc click vào thiệp làm đóng thiệp
            card.addEventListener('click', e => e.stopPropagation());

            function closeCard() {
                card.classList.remove('show');
                overlay.classList.remove('show');
            }

            closeCardBtn.addEventListener('click', closeCard);
            overlay.addEventListener('click', closeCard);
        });
    </script>
</body>
</html>

