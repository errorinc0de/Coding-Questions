function tournamentWinner(competitions, results) {
    // Write your code here.
      const awayTeamWinIndex = 0
      const homeTeamWinIndex = 1
      const awayTeamIndex = 1
      const homeTeamIndex = 0
      const matchCount = results.length
      const scoreCard = {}
      
      for(let ite = 0; ite < matchCount; ite++) {
          
          if(!scoreCard[competitions[ite][homeTeamIndex]])
              scoreCard[competitions[ite][homeTeamIndex]] = 0;
          if(!scoreCard[competitions[ite][awayTeamIndex]])
              scoreCard[competitions[ite][awayTeamIndex]] = 0;
          
          results[ite] === awayTeamWinIndex ? (scoreCard[competitions[ite][awayTeamIndex]] += 3) : (scoreCard[competitions[ite][homeTeamIndex]] += 3)
          
      }
      
      let winTeam = ''
      let maxScore = 0;
      
      Object.keys(scoreCard).forEach((ele) => scoreCard[ele] > maxScore ? ( maxScore = scoreCard[ele], winTeam = ele ) : '')
      
    return winTeam; 
  }
  
  // Do not edit the line below.
  exports.tournamentWinner = tournamentWinner;
  